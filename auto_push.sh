#!/bin/bash

# Navigate to repository directory
REPO_PATH="/home/scorzion/Tech/Competitive-Programming-journey"
cd "$REPO_PATH" || exit

# Fetch latest changes from remote main branch quietly
git pull --rebase origin main > /dev/null 2>&1

# Check if there are untracked or modified changes
IF_CHANGED=$(git status --porcelain)

if [ -n "$IF_CHANGED" ]; then
    # Stage all changes
    git add .

    # Format list of changed files for the commit body
    CHANGED_FILES=$(git status --short | sed 's/^.../- /')

    COMMIT_TITLE="Auto-commit: $(date +'%Y-%m-%d %H:%M:%S')"
    COMMIT_BODY="Updated/Added solutions:
$CHANGED_FILES"

    git commit -m "$COMMIT_TITLE" -m "$COMMIT_BODY"
    git push origin main
fi

