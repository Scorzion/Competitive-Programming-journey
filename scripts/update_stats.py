#!/usr/bin/env python3
import os
import re

# Define the root of the repository
REPO_ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
README_PATH = os.path.join(REPO_ROOT, "README.md")

# Categories to track with their human-readable names and links
CATEGORIES = [
    {
        "dir": "Codeforces",
        "name": "Codeforces",
        "desc": "Codeforces contest & round solutions (Div.1, Div.2, Div.3, Div.4)",
        "link": "./Codeforces"
    },
    {
        "dir": "Codechef",
        "name": "CodeChef",
        "desc": "CodeChef competition & division challenge solutions",
        "link": "./Codechef"
    },
    {
        "dir": "AtCoder",
        "name": "AtCoder",
        "desc": "AtCoder Beginner/Regular Contest solutions",
        "link": "./AtCoder"
    },
    {
        "dir": "CP 31 sheet",
        "name": "CP 31 Sheet",
        "desc": "Rating-wise solutions of the famous CP-31 Sheet",
        "link": "./CP%2031%20sheet"
    },
    {
        "dir": "CSES",
        "name": "CSES",
        "desc": "Solutions to the CSES.fi Problem Set",
        "link": "./CSES"
    },
    {
        "dir": "TLE LEVEL 1",
        "name": "TLE Level 1",
        "desc": "Solutions for TLE Level 1 + Course Completion Cert",
        "link": "./TLE%20LEVEL%201"
    },
    {
        "dir": "TLE LEVEL 2",
        "name": "TLE Level 2",
        "desc": "Solutions and weekly practice for TLE Level 2",
        "link": "./TLE%20LEVEL%202"
    },
    {
        "dir": "TLE LEVEL 3",
        "name": "TLE Level 3",
        "desc": "Solutions and practice for TLE Level 3",
        "link": "./TLE%20LEVEL%203"
    },
    {
        "dir": "TLE LEVEL 4",
        "name": "TLE Level 4",
        "desc": "Solutions and practice for TLE Level 4",
        "link": "./TLE%20LEVEL%204"
    },
    {
        "dir": "CP Competitions",
        "name": "CP Competitions",
        "desc": "College contests, Hackathons & OAs (Citadel, TCS, IEEEXtreme, etc.)",
        "link": "./CP%20Competitions"
    },
    {
        "dir": "ICPC",
        "name": "ICPC",
        "desc": "ACM-ICPC practice problems & regionals preparation",
        "link": "./ICPC"
    },
    {
        "dir": "IICPC",
        "name": "IICPC",
        "desc": "Inter-IIT / Codefest 2025 CP preparation",
        "link": "./IICPC"
    },
    {
        "dir": "AMS",
        "name": "AMS Challenges",
        "desc": "AMS Monthly Challenges & Derive 2026",
        "link": "./AMS"
    },
    {
        "dir": "Resources",
        "name": "Resources",
        "desc": "CP Reference books, guides, and study resources",
        "link": "./Resources"
    }
]

def count_files(directory):
    cpp_count = 0
    total_count = 0
    dir_path = os.path.join(REPO_ROOT, directory)
    if not os.path.exists(dir_path):
        return 0, 0
    
    for root, _, files in os.walk(dir_path):
        # Skip git or hidden directories
        if "/." in root or root.endswith("/."):
            continue
        for file in files:
            # Skip hidden files or system files
            if file.startswith("."):
                continue
            total_count += 1
            if file.endswith(".cpp"):
                cpp_count += 1
                
    return cpp_count, total_count

def generate_table():
    table = [
        "| Section / Track | Description | C++ Solved | Total Files | Link |",
        "| :--- | :--- | :---: | :---: | :---: |"
    ]
    
    total_cpp = 0
    total_files = 0
    
    for cat in CATEGORIES:
        cpp, total = count_files(cat["dir"])
        total_cpp += cpp
        total_files += total
        table.append(f"| **{cat['name']}** | {cat['desc']} | `{cpp}` | `{total}` | [Browse]({cat['link']}) |")
        
    table.append(f"| **Total Summary** | **Overall progress in C++ and resources** | **`{total_cpp}`** | **`{total_files}`** | - |")
    return "\n".join(table)

def cleanup_files():
    print("Cleaning up unwanted files (.exe, stray input/output txt)...")
    removed_count = 0
    for root, _, files in os.walk(REPO_ROOT):
        # Skip git or hidden directories except .io
        if "/.git" in root or root.endswith("/.git"):
            continue
        is_io_dir = "/.io" in root or root.endswith("/.io")
        for file in files:
            file_lower = file.lower()
            file_path = os.path.join(root, file)
            should_remove = False
            
            if file_lower.endswith(".exe"):
                should_remove = True
            elif file_lower in ["input.txt", "output.txt"]:
                if not is_io_dir:
                    should_remove = True
                    
            if should_remove:
                try:
                    os.remove(file_path)
                    print(f"Removed: {os.path.relpath(file_path, REPO_ROOT)}")
                    removed_count += 1
                except Exception as e:
                    print(f"Failed to remove {file_path}: {e}")
    print(f"Cleanup finished. Removed {removed_count} files.")

def main():
    cleanup_files()
    print("Scanning directories and counting files...")
    stats_table = generate_table()
    
    start_marker = "<!-- STATS_START -->"
    end_marker = "<!-- STATS_END -->"
    
    print("Creating README from premium uniform template...")
    new_content = f"""# 🏆 Competitive Programming Journey

<p align="center">
  <img src="https://img.shields.io/badge/Language-C%2B%2B17-orange?style=for-the-badge&logo=c%2B%2B" alt="Language C++" />
  <img src="https://img.shields.io/badge/Editor-Sublime%20Text-blueviolet?style=for-the-badge&logo=sublime-text" alt="Editor Sublime Text" />
  <img src="https://img.shields.io/badge/OS-Linux-blue?style=for-the-badge&logo=linux" alt="OS Linux" />
  <img src="https://img.shields.io/badge/Maintained%3F-Yes-green?style=for-the-badge" alt="Maintained" />
</p>

Welcome to my competitive programming repository! This workspace tracks my progress, solutions, templates, and learning milestones across various platforms, contests, and courses.

---

## 🎯 What I'm Currently Up To

Here is the current focus of my competitive programming journey and my target milestones:

- 🎓 **Current Learning**: Solving weekly problem sheets in **TLE Level 2 Course** (Intermediate Algorithms, Trees, Graphs, Two Pointers).
- 📈 **Active Practice**: Grinding the **CP-31 Sheet** (focusing on rating levels `800-1200`) to master speed, implementation, and accuracy.
- 🏆 **Active Goal**: Achieving the rank of **Specialist (`1400+`)** on Codeforces (Current: Pupil `1208` max).
- 🏅 **Next Competitions**: Preparing for **IEEEXtreme 20.0** and **ICPC 2026** with team *Syntax_Solvers*.
- 💼 **Professional Prep**: Practicing OA-style problems to prepare for software engineering / quant analyst roles.

---

## 👤 Profiles & Handle Ratings

<div align="center">

| Platform | Handle | Rating / Tier | Max Rating | Link |
| :--- | :--- | :---: | :---: | :---: |
| <img src="https://img.shields.io/badge/Codeforces-white?style=flat&logo=codeforces" /> | **Sneaky_Typer** | Pupil | `1208` | [Codeforces Profile](https://codeforces.com/profile/Sneaky_Typer) |
| <img src="https://img.shields.io/badge/CodeChef-brown?style=flat&logo=codechef" /> | **scorzion** | 2★ | `1420` | [CodeChef Profile](https://www.codechef.com/users/scorzion) |
| <img src="https://img.shields.io/badge/GitHub-black?style=flat&logo=github" /> | **scorzion** | Developer | - | [GitHub Profile](https://github.com/scorzion) |

</div>

### 🌟 Key Achievements
- **IEEEXtreme 19.0**: Global Rank **`1493`** / 8793 | AIR **`476`** (Team: *Syntax_Solvers*)
- **Reverse Coding X**: **Finalist** (organized by IIT Madras & IMC Trading)
- **TLE Level 1**: **Course Completed** (Certificate enclosed in folder)

---

## 📊 Repository Statistics

This table details the categories and counts of solved C++ problems. It is dynamically updated using the automation script.

{start_marker}

{stats_table}

{end_marker}

*To update the statistics table above, simply run `python3 scripts/update_stats.py` from the repository root.*

---

## 📂 Structural Highlights

### 🏫 Learning Tracks
- **[TLE Levels](./)**: Coursework from TLE Eliminators. 
  - **[Level 1](./TLE%20LEVEL%201)**: Foundational logic, STL, Number theory basics. [View Certificate](./TLE%20LEVEL%201/Certificates/CourseCompletion.pdf)
  - **[Level 2](./TLE%20LEVEL%202)**: Intermediate algorithms, binary search, two pointers, graphs.
  - **[Level 3](./TLE%20LEVEL%203)** & **[Level 4](./TLE%20LEVEL%204)**: Advanced data structures, DP, trees, segment trees.
- **[CP 31 Sheet](./CP%2031%20sheet)**: Rating-wise curated sheet containing top quality Codeforces problems.
- **[CSES](./CSES)**: Classic solutions for the [CSES.fi](https://cses.fi) problemset.

### ⚔️ Contests & Competitions
- **[Codeforces](./Codeforces) & [CodeChef](./Codechef)**: Code solutions separated by Division and contests.
- **[CP Competitions](./CP%20Competitions)**: Solutions for college hackathons and hiring OAs (e.g. Citadel, Goldman Sachs CS Hackathon 2025, TCS Codevita, IEEEXtreme).
- **[AMS](./AMS)**: AMS challenges, deriving algorithms, and monthly milestones.

---

## 🛠️ Development Workflow

- **IDE**: Sublime Text
- **Fast I/O Workspace**: Setup using `input.txt` and `output.txt` inside [.io](./.io) folder to avoid console constraints during debugging.
- **Standard Template**: A modular template is maintained under [templates/cp.cpp](./templates/cp.cpp) including short macros (`ll`, `pb`, `all`, `sz`) and optimized fast I/O setup.

```cpp
// Fast I/O standard setup
ios_base::sync_with_stdio(false);
cin.tie(NULL);
```

---
<p align="center"><i>Happy Coding! 🚀</i></p>
"""

    with open(README_PATH, "w", encoding="utf-8") as f:
        f.write(new_content)
    print("README.md updated successfully!")

if __name__ == "__main__":
    main()
