import http.server
import socketserver

PORT = 8000

Handler = http.server.SimpleHTTPRequestHandler

with socketserver.TCPserver("",PORT),Handler)as httpd:
    print("serving at port",PORT)
    httpd.serve_forever()
