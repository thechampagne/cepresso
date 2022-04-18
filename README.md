<p align="center">
<img src="https://raw.githubusercontent.com/thechampagne/cepresso/main/.github/assets/cepresso.png" width="400"/>
</p>

<p align="center">
<a href="https://github.com/thechampagne/cepresso/releases/latest"><img src="https://img.shields.io/github/v/tag/thechampagne/cepresso?label=version" alt="version"></a>
<a href="https://github.com/thechampagne/cepresso/blob/main/LICENSE"><img src="https://img.shields.io/github/license/thechampagne/cepresso" alt="license"></a>
</p>

## About cepresso

A mini web framework for C. It's written on top of [httpserver.h](https://github.com/jeremycw/httpserver.h).

### Example

```c
#include "cepresso.h"

void cb(cepresso_req* req, cepresso_res* res)
{
  res->status(req,200);
  res->set(req,"content-type", "text/html");
  res->send(req,"<h1>Hello World</h1>");
}

int main()
{
	cepresso* app;
  	app = cepresso_init();
	app->get("/", cb);
	app->listen(app,3000);
	return 0;
}
```

### License

cepresso is released under the [MIT License](https://github.com/thechampagne/cepresso/blob/main/LICENSE).