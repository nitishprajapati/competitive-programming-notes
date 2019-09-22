#SEGMENT TREE EFFICIENT IMPLEMENTATION

from math import ceil,log2
tree = []
n = 0

def build(arr):
    for i in range(0,n): # 0 to n-1
        tree[n+i] = arr[i]

    for i in reversed(range(1, n)): # n-1 to 1
        tree[i] = tree[i<<1] + tree[i<<1 | 1]


def query(l,r): # zero indexed, [l,r)
    res = 0
    l = l + n
    r = r + n
    while l<r:
        if l&1:
            res += tree[l]
            l += 1
        if r&1:
            r -= 1
            res += tree[r]

        l >>= 1
        r >>= 1
    return res

arr = [1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20]
n = len(arr)
tree = [0]*int(2**(ceil(log2(n))+1))
build(arr)
print(query(0,1)) # [0, 1)
print(query(0,2)) # [0, 2)
print(query(0,3)) # [0, 3)
print(query(3,6)) # [3, 6)
