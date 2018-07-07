#! /bin/bash
echo "Enter name of dir":
read filename
mkdir -p $filename
#cd filename
#touch {a..d}.txt
a=0
while [ "$a" -lt 4 ]
do
touch $filename/$filename$a.txt
a=`expr $a + 1`
done

zip -r my_arch.zip $filename
len=`expr length "$filename"`
reverse=echo "$filename" | rev
mkdir -p $reverse
unzip $my_arch.zip -d $reverse
cp $reverse/$filename/ $reverse/
rm $reverse/$filename
ls $reverse/
b=0
while [ "$b" -lt 4 ]
do
cat < $reverse/$filename$b.txt
b=`expr $b + 1`
done