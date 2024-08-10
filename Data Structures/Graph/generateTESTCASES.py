import random

def generate_test_case(n, density):
    edges = []
    max_edges = n * (n - 1) // 2
    num_edges = int(max_edges * density)

    for _ in range(num_edges):
        u = random.randint(0, n - 1)
        v = random.randint(0, n - 1)
        while u == v:
            v = random.randint(0, n - 1)
        w = random.randint(1, 100)
        edges.append((u, v, w))
    
    src = random.randint(0, n - 1)
    return n, num_edges, edges, src

def write_test_case_to_file(n, e, edges, src, filename):
    with open(filename, 'w') as f:
        f.write(f"{n} {e}\n")
        for u, v, w in edges:
            f.write(f"{u} {v} {w}\n")
        f.write(f"{src}\n")

n = 5000  # Number of nodes
density = 0.9  # 50% of the possible edges

n, e, edges, src = generate_test_case(n, density)
write_test_case_to_file(n, e, edges, src, 'in.txt')
