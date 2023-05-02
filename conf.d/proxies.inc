# just a sample list of proxies to include in http and https servers


	# gitea
        location /git/ {
                include conf.d/proxy_set_header.inc;
                proxy_pass  http://localhost:3000/;
        }

	# file server
        location /files {
                include conf.d/proxy_set_header.inc;
                proxy_pass  http://localhost:81/files;
        }
	# qbittorrent-nox
        location /torrent/ {
                include conf.d/proxy_set_header.inc;
                proxy_pass  http://localhost:8023/;
        }
