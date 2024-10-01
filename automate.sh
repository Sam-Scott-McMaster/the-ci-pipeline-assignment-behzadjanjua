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
