import socket
print("\n------||-----||------||-----||------||------||-----||------||-----||------")
serverSocket=socket.socket()
serverSocket.bind(('192.168.43.183',9999))#creating a hotspot or host
serverSocket.listen(3)#server socket is on and ready to accept the request
i=0
client,addr=serverSocket.accept()# getting the client and its address
#print("client says:-",client.recv(20).decode())#receving what client has sent
while i<2:
    client,addr=serverSocket.accept()# getting the client and its address
    print("client says:-",client.recv(20).decode())#receving what client has sent
    #print("connected with",addr)
    i=i+1
    msg=input("say to client") #sending to client
    client.send(bytes(msg,'utf-8'))
serverSocket.close()
print("server connection closed")