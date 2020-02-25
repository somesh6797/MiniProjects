import socket

clientSocket=socket.socket()
clientSocket.connect(('192.168.43.183',9999))
msg1=input("what do u say")
clientSocket.send(bytes(msg1,'utf-8'))
chat=clientSocket.recv(20).decode()
print("server says:-",chat)
while(len(chat)>2):    
    clientSocket=socket.socket()
    clientSocket.connect(('192.168.43.183',9999))
    msg1=input("what do u say")
    clientSocket.send(bytes(msg1,'utf-8'))
    chat=clientSocket.recv(20).decode()
    print("server says:-",chat)