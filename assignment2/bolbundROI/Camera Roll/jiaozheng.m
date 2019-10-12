I=imread('a1.jpg');
[J,newOrigin] = undistortImage(I,cameraParams);
figure
subplot(1,2,1),imshow(I);
subplot(1,2,2),imshow(J);