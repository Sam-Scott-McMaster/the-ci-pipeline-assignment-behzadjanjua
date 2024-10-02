# Behzad Janjua, 400516103, October 3rd 2024
#
# This script adds, commits, tags (if specified), and pushes the quiz.c file. Alongside git diff and log (to track changes).

git add quiz.c 
git diff
git commit
if [[ "$1" == "" ]]
then
        :
else
        git tag $1
        git push origin $1
fi
git status
git push
git log
