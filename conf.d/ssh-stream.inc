upstream ssh {
	server localhost:2222;
}
server {
	listen 22;
	proxy_pass ssh;
}
