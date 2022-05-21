#1
class ListQueue:

    def __init__(self):
        self.__queue = []

    def enqueue(self, x):
        self.__queue.insert(0, x) #insert로 변경

    def dequeue(self):
        return self.__queue.pop() #pop()으로 변경
    
    def front(self):
        return self.__queue[-1] #queue의 마지막 원소
    
    def isEmpty(self) -> bool:
        return len(self.__queue) == 0

    def dequeueAll(self):
        self.__queue.clear()
