#4
bestackque = ListQueue()
littleque = ListQueue()


def push(x):
    bestackque.enqueue(x)


def pop():
    for i in len(bestackque):
        littleque.enqueue(bestackque(len(bestackque) -1 -i))
    
    bestackque.dequeueAll()
    littleque.dequeue()

    for i in len(littleque):
        bestackque.enqueue(littleque(len(littleque) -1 -i))
    littleque.dequeueAll()
