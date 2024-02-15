Step-by-step guide to creating a branch from `main`, making a commit on that branch, and then merging it back into `main`:
<img src="https://learn.microsoft.com/en-us/azure/devops/repos/git/media/branching-guidance/featurebranching.png" />

1. **Ensure you're on the `main` branch**:
    ```bash
    git checkout main
    ```

2. **Pull the latest changes**:
    ```bash
    git pull
    ```

3. **Create a new branch from `main`**:
    ```bash
    git checkout -b new-feature
    ```
    This command creates a new branch named `new-feature` and switches to it.

4. **Make changes, stage, and commit**:
   Make your changes to the code:
   
    ```bash
    touch featurefile.txt
    ```

   
   Stage them, and commit:
    ```bash
    git add .
    git commit -m "Implemented new feature"
    ```

6. **Switch back to the `main` branch**:
    ```bash
    git checkout main
    ```

7. **Merge the changes from the `new-feature` branch into `main`**:
    ```bash
    git merge new-feature
    ```

8. **Resolve any merge conflicts (if any)**:
    If there are any conflicts, Git will prompt you to resolve them. After resolving, you need to add the resolved files and commit the merge:
    ```bash
    git add .
    git commit -m "Merged new-feature into main"
    ```

9. **Push changes to the remote repository**:
    ```bash
    git push
    ```

This process will create a new branch from `main`, make a commit on that branch, merge the changes back into `main`, and finally push the changes to the remote repository.

**If you want to push the feature branch (for the first time):**

    ```bash
git push --set-upstream origin new-feature
    ```



