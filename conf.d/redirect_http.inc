## Contents of /etc/nginx/conf.d/redirect_http.inc

location / {
        return 301 https://$host$request_uri;
}
