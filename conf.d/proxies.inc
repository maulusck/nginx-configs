# sample list of local proxied services

# gitea
location /git/ {
	include conf.d/proxy_set_header.inc;
	proxy_pass  http://localhost:3000/;
}

# fileserver
location /files {
	include conf.d/proxy_set_header.inc;
	proxy_pass  http://localhost:81/files;
}
# qbittorrent-nox
location /torrent/ {
	include conf.d/proxy_set_header.inc;
	proxy_pass  http://localhost:8023/;
}
# homeassistant
location / {
	include conf.d/proxy_set_header.inc;
	include conf.d/proxy_websocket.inc;
	proxy_pass  http://localhost:8123/;
}
# pihole
location /pihole/ {
	include conf.d/proxy_set_header.inc;
	proxy_pass  http://localhost:8053/;
}