# reverse proxy params
proxy_set_header	X-Forwarded-By		$server_addr:$server_port;
proxy_set_header	X-Forwarded-For		$proxy_add_x_forwarded_for;
proxy_set_header	X-Forwarded-Proto	$scheme;
proxy_set_header	Host				$host;