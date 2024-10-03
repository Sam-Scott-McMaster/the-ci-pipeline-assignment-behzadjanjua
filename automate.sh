# Behzad Janjua, 400516103, October 3rd 2024
#
# This script automates a Git workflow that stages specific files, commits changes with a custom 
# message, creates a tag, and pushes both the main branch and tags to the remote repository.
# After pushing, it checks the repository status.

git add quiz.c automate.sh
git diff
git commit -m "$1"
git tag "$2"
git push origin main
git push origin main --tags 
git status
