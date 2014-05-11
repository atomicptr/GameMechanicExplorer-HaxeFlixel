.PHONY: all

all:
	# install ruby packages
	bundle install
	
	# build web page
	jekyll build --source src --destination bin_tmp
	
	# make examples
	$(MAKE) -C bin_tmp
	
	# remove old web page
	rm -rf bin
	
	# move bin_tmp to bin
	mv bin_tmp bin