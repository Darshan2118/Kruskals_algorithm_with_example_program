# 🧮 Kruskal's Algorithm – Minimum Spanning Tree (MST)

This repository contains a clean and simple implementation of **Kruskal's Algorithm** in C/C++ to find the **Minimum Spanning Tree (MST)** of a weighted, undirected graph.

---

## 📌 What is Kruskal's Algorithm?

Kruskal’s algorithm is a **greedy algorithm** used to find the MST of a graph. An MST is a subset of the edges that connects all the vertices together without any cycles and with the **minimum possible total edge weight**.

---

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

## 🚀 How to Run (VS Code + MSVC)

### 🔧 Requirements

* **Visual Studio Code**
* **MSVC compiler** (via Visual Studio or Build Tools)
* **C/C++ extension for VS Code** installed
* Refer to this Youtube video for MSVC installation [https://www.youtube.com/watch?v=hH0798bL90Y\&t=185s](https://www.youtube.com/watch?v=hH0798bL90Y&t=185s)

### ▶️ Steps to Run

1. **Open folder** in VS Code:

   * `File > Open Folder > kruskals-algorithm`

2. **Build the Program**:

   * Use `Ctrl + Shift + B` to compile with MSVC.
   * Or go to Run and Debug and then Click on C/C++ option(it should pop up as soon as u hit run)

## 🧪 Sample Output

```
Edge: 0 - 1  | Weight: 4
Edge: 1 - 2  | Weight: 5
Edge: 0 - 2  | Weight: 6
Total Weight of MST: 15
```

---

## 📜 License

This project is open-source and available under the [MIT License](LICENSE).

&#x20;

## Author 
Darshan 
