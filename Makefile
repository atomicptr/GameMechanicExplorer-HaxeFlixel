.PHONY: all


all:
	$(MAKE) -C src
	jekyll build --source src --destination bin
