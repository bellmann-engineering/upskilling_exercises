### **1. Clone a Repository**
- **Copy the Repository URL** from GitHub.
- Run the command:
  ```bash
  git clone <repository-url>
  ```
  Example:
  ```bash
  git clone https://github.com/username/repo-name.git
  ```
---

### **2. Navigate to the Project Directory**
```bash
cd repo-name
```

---

### **3. Add Changes to Staging**
- To stage all changes:
  ```bash
  git add .
  ```
- To stage a specific file:
  ```bash
  git add <file-name>
  ```

---

### **4. Commit the Changes**
- Add a descriptive commit message:
  ```bash
  git commit -m "Your commit message"
  ```
  Example:
  ```bash
  git commit -m "Added new feature"
  ```

---

### **5. Push Changes to the Remote Repository**
- Push to the default branch (e.g., `main` or `master`):
  ```bash
  git push
  ```

---

### **6. Solving Merge Conflicts**
#### **Pull the Latest Changes**
```bash
git pull
```

#### **Resolve Conflicts**
- Open conflicting files in your code editor. Conflicts will look like this:
  ```plaintext
  <<<<<<< HEAD
  Your changes
  =======
  Changes from the remote branch
  >>>>>>> branch-name
  ```
- Edit the file to resolve the conflict, removing the conflict markers (`<<<<<<<`, `=======`, `>>>>>>>`).

#### **Stage the Resolved File(s)**
```bash
git add <file-name>
```

#### **Commit the Resolution**
```bash
git commit -m "Resolved merge conflict in <file-name>"
```

#### **Push the Changes**
```bash
git push
```

---

### **Common Commands**
- **Check the status of your repository**:
  ```bash
  git status
  ```
- **View commit history**:
  ```bash
  git log --oneline
  ```

