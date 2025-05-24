# 🧮 Kruskal's Algorithm – Minimum Spanning Tree (MST)

This repository contains a clean and simple implementation of **Kruskal's Algorithm** in C/C++ to find the **Minimum Spanning Tree (MST)** of a weighted, undirected graph.

**A minimum spanning tree (MST)** or **minimum weight spanning tree** for a weighted, connected, and undirected graph is a spanning tree (no cycles and connects all vertices) that has minimum weight. The weight of a spanning tree is the sum of all edges in the tree.  

---

## 📌 What is Kruskal's Algorithm?

Kruskal’s algorithm is a **greedy algorithm** used to find the MST of a graph. An MST is a subset of the edges that connects all the vertices together without any cycles and with the **minimum possible total edge weight**.

In **Kruskal's algorithm**, we sort all edges of the given graph in increasing order. Then it keeps on adding new edges and nodes in the MST if the newly added edge does not form a cycle. It picks the minimum weighted edge at first and the maximum weighted edge at last. Thus we can say that it makes a locally optimal choice in each step in order to find the optimal solution. Hence this is a **Greedy Algorithm**.

---

## How to find MST using Kruskal's algorithm?
Below are the steps for finding MST using Kruskal's algorithm:
```
1.Sort all the edges in a non-decreasing order of their weight. 
2.Pick the smallest edge. Check if it forms a cycle with the spanning tree 
formed so far. If the cycle is not formed, include this edge. Else, discard it. 
3.Repeat step 2 until there are (V-1) edges in the spanning tree.

```
## 🧠 The Algorithm (Pseudocode)

```
1. Sort all the edges in non-decreasing order of their weights.
2. Initialize an empty set to store edges in the MST.
3. For each edge in sorted order:
   a. If it does not form a cycle with the MST formed so far:
       - Include it in the MST.
4. Repeat until MST contains (V - 1) edges.
```

```
Algorithm :
krushkal's() //parameters or conditions  
```

The algorithm uses a **Disjoint Set Union (DSU)** data structure (also called Union-Find) to detect cycles efficiently.

---

## 🔍 Explanation

* The graph is represented by a list of edges.
* Each edge connects two vertices and has a weight.
* The algorithm **sorts the edges** and **adds them one by one**, skipping those that form a cycle.
* The result is a tree that spans all vertices with the **minimum total weight**.

---

## ✅ Use Cases

* **Network design** – laying out cables or pipelines with minimal cost.
* **Road construction** – connecting cities with minimal total road length.
* **Cluster analysis** – building clusters in machine learning.
* **Image segmentation** – simplifying images using graph-based region merging.

---

## 👍 Advantages

* **Greedy and efficient** – works well with edge list representation.
* **Easy to implement** using sorting and Union-Find.
* Efficient for **sparse graphs** (few edges).

---

## 🙎 Disadvantages

* Requires edge sorting – O(E log E) time complexity.
* Not optimal for **dense graphs** compared to Prim's algorithm.
* Needs Union-Find structure for optimal performance.

---
## Time Complexity: O(E * log E) or O(E * log V)
```
1.Sorting of edges takes O(E*logE) time. 
2.After sorting, we iterate through all edges and apply the find-union algorithm. 
The find and union operations can take at most O(logV) time.
3.So overall complexity is O(E*logE + E*logV) time. 
4.The value of E can be at most O(V2), so O(logV) and O(logE) are the same. 
Therefore, the overall time complexity is O(E * logE) or O(E*logV)

**Auxiliary Space**: O(E+V), where V is the number of vertices 
nd E is the number of edges in the graph.
``` 
---

## 🚀 How to Run (VS Code + MSVC)

### 🔧 Requirements

* **Visual Studio Code**
* **MSVC compiler** (via Visual Studio or Build Tools)
* **C/C++ extension for VS Code** installed
* Link to download MSVC https://visualstudio.microsoft.com/downloads/ scroll to the end click on tools for visual studio and then click on download.
* Refer to this Youtube video for MSVC installation [https://youtu.be/hH0798bL90Y?si=kJtg-9wbsLde66KA] 

### ▶️ Steps to Run

1. **Open folder** in VS Code:

   * `File > Open Folder > kruskals-algorithm`

2. **Build the Program**:

   * Use `Ctrl + Shift + B` to compile with MSVC.
   * Or go to `Run and Debug` and then Click on C/C++ option(it should pop up as soon as u hit run)

## Alternate method if you're using Linux distro's 
* This is if you're using a virtual box or separate drive for this 
* Common distros are Ubuntu,mint, Arch.
* make sure you have gcc/g++ installed on the system.
* Copy paste the ***c*** file into the text editor.
* Open terminal, go to the directory where you have saved it and then run the code.
* Refer Youtube for installing gcc or running the code. 

---
## 🧪 Sample Output

```
The edges of spanning are:

Edge 1    (2->1) = 1
Edge 2    (3->1) = 1

Mininum cost = 2
```

---

## 📜 License

This project is open-source and available under the [MIT License](LICENSE).

&#x20;
---
## Credits
* GeeksforGeeks ,check them out here : https://www.geeksforgeeks.org/ 
---