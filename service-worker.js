self.addEventListener("install", (e) => {
  e.waitUntil(
    caches.open("habit-tracker-v1").then((cache) => {
      return cache.addAll([
        "./",
        "./index.html",
        "./manifest.json",
        "./icons/favicon-192.ico",
        "./icons/favicon-512.ico"
      ]);
    })
  );
});

self.addEventListener("fetch", (e) => {
  e.respondWith(
    caches.match(e.request).then((response) => response || fetch(e.request))
  );
});
