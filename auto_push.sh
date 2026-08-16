#!/bin/bash

# Navigate to repository directory
REPO_PATH="/home/scorzion/Tech/Competitive-Programming-journey"
cd "$REPO_PATH" || exit

# Fetch latest changes from remote main branch quietly
git pull --rebase origin main > /dev/null 2>&1

# Check if there are untracked or modified changes
if [ -n "$(git status --porcelain)" ]; then
    git add .
    git commit -m "Auto-commit: $(date +'%Y-%m-%d %H:%M:%S')"
    git push origin main
fi
