* using makefile to compile all the source code
* using the following command to run the program
* please ensure that you are in the the folder which contain the Makefile
* it is not necessary to enter the src folder

Download TRAINING SET IMAGE FILE (train-images-idx3-ubyte.gz) as dataset, and select the * first 100 queries from TEST SET IMAGE FILE (t10k-images-idx3-ubyte.gz) as query set from * http://yann.lecun.com/exdb/mnist/.

Rename the dataset as Mnist.ds, the queryset as Mnist.q.

example:
copy file 'Mnist.ds', 'Mnist.q' to the directory 'data'
make
./medrank -n 60000 -d 784 -qn 100 -ds ./data/Mnist.ds -qs ./data/Mnist.q

---------------------------------------------------------------------------
* you must ensure that the input data files are text file
* if you don't have a text file, you can use the getTrainData.cpp and getTestData.cpp in the ./data folder to extract data from the original binary file of the Mnist data set

---------------------------------------------------------------------------
* created by group 1, class 8
* team members: HongChuanghuang,
                ZhouJialu,
                ChenZhurun,
                SheChongbin
* contact: 756387225@qq.com