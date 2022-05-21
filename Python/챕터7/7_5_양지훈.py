#5
bequestack = Liststack()
littlestack = Liststack()

def enqueue(x):
    bequestack.push(x)

def dequeue():
    for i in len(bequestack):
        littlestack.push(bequestack(len(bequestack) -1 -i))

    bequestack.popAll()
    littlestack.pop()
    
    for i in len(littlestack):
        bequestack.push(littlestack(len(littlestack) -1 -i))
    littlestack.popAll()