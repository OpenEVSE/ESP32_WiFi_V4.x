static const char CONTENT_SW_JS[] PROGMEM = 
  "\n"
  "self.addEventListener('install', (e) => {\n"
  "  self.skipWaiting();\n"
  "});\n"
  "self.addEventListener('activate', (e) => {\n"
  "  self.registration.unregister()\n"
  "    .then(() => self.clients.matchAll())\n"
  "    .then((clients) => {\n"
  "      clients.forEach((client) => {\n"
  "        if (client instanceof WindowClient)\n"
  "          client.navigate(client.url);\n"
  "      });\n"
  "      return Promise.resolve();\n"
  "    })\n"
  "    .then(() => {\n"
  "      self.caches.keys().then((cacheNames) => {\n"
  "        Promise.all(\n"
  "          cacheNames.map((cacheName) => {\n"
  "            return self.caches.delete(cacheName);\n"
  "          }),\n"
  "        );\n"
  "      })\n"
  "    });\n"
  "});\n"
  "    \n";
static const char CONTENT_SW_JS_ETAG[] PROGMEM = "62ee0930beaae343d4cabd5b391bfd3ef8d7fa3b6a2ab22db6bc983f004db7b1";
