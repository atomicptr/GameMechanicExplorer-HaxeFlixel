.PHONY: all

all:
	# install ruby packages
	bundle install
	
	# build web page
	jekyll build --source src --destination bin
	
	# make examples
	$(MAKE) -C bin