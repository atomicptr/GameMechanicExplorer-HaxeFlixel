.PHONY: all


all:
	# install ruby packages
	bundle install
	
	# make examples
	$(MAKE) -C src
	
	# build web page
	jekyll build --source src --destination bin
