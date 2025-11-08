# secure nginx, see https://cipherli.st/

ssl_prefer_server_ciphers on;
ssl_ciphers "EECDH+AESGCM:EDH+AESGCM:AES256+EECDH:AES256+EDH";
ssl_ecdh_curve secp384r1; # Requires nginx >= 1.1.0
ssl_stapling on; # Requires nginx >= 1.3.7
ssl_stapling_verify on; # Requires nginx => 1.3.7
resolver 9.9.9.9 1.1.1.1 valid=300s;
resolver_timeout 5s;

# https://hstspreload.org
add_header Strict-Transport-Security "max-age=63072000" always; 
# By default, HSTS header is not added to subdomain requests. If you have subdomains and want
# HSTS to apply to all of them, you should add the includeSubDomains variable like this:
#add_header Strict-Transport-Security "max-age=63072000; includeSubDomains" always;

add_header X-Frame-Options DENY;
add_header X-Content-Type-Options nosniff;
add_header X-XSS-Protection "1; mode=block";
add_header X-Robots-Tag none;
