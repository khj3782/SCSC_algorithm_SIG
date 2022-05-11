#1 + 더미 헤드를 사용하면 원소를 삽입할 때 코드를 간단하게 만들 수 있다.
#  - 노드가 하나 더 생기기 때문에 인덱스에서 이를 고려하여야 한다.

2
def contains(self, x) -> bool:
    return index(x) >= 0

3
def printInterval(self, i:int, j:int):
    curr = self.__getNode(i)
    for i in range(j-i+1):
        print(curr.item)
        curr = curr.next

4
def printInterval(self, i:int, j:int):
    curr = self.__getNode(i)
    for i in range(j-i+1):
        print(curr.item)
        curr = curr.next

5-1
def numItems():
    num = 0
    curr = self.__head.next
    while curr != self.__head:
        num += 1
        curr = curr.next
    return num-1

#5-2 아무리 해도 답 안나옴 ㅠ 재귀하면 재정의
def numItems(self):


6
def pop(self, i:int, k: int):
    if(i>=0 and i<= self.__numItems-1):
        prev = self.__getNode(i-1)
        curr = prev.next
        end = self.__getNode(self.__numItems-1)
        cnt = 0
        a = []
        for j in range(k):
            if curr == end:
                prev.next = None
                break
            else:
                a.append(curr.item)
                curr = curr.next
                cnt += 1
        prev.next = curr.next
        self.__numItems -= cnt       
        return a
    else:
        return None
    
#7 정창하님 풀이 이상 - 124에 3이 들어간다 생각하면 오류
def add(self, x) -> None:
    prevv = self.__head
    curr = prevv.next
    new = BidirectNode(x, None, None)

    for i in range(self.__numItems):
        if x <= curr.item:
            prevv.next = new
            new.prev = prevv
            new.next = curr
            curr.prev = new
            break
        elif i == self.__numItems -1:
            curr.next = new
            new.prev = curr
            new.next = self.__head
        else:
            prevv = curr
            curr = curr.next

    self.__numItems += 1

8
def isinSameList(self, node1, node2):
    prev = node1
    curr = node2
    while prev.next == None:
        if prev == node2:
            return True
        prev = prev.next
    while curr.next == None:
        if curr == node1:
            return True
    return False        

9
def lastIndexOf(self, x):
    reverse(self)
    last = self.__numItems -self.index(x) -1
    reverse(self)
    return last

10
def lastIndexOf(self, x):
    num = 0
    curr = self.__head.prev
    while curr != self.__head:
        if curr.item == x:
            return self.__numItems - num
        curr = curr.prev
        num += 1

    return -12345