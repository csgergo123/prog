package labdaPattogas;

import java.util.concurrent.TimeUnit;
import java.math.*;

public class labdaPattogas {

public static void main(String[] args){

		int w = 50 , h = 50;
	    int x = 10, y = 20;
	    int x2 = x, y2 = y;

	    while(1) {
	    	try {
				TimeUnit.MILLISECONDS.sleep(50);

				y2 = (y2 + 1) % (2 * h);
			    y = (int) (y+Math.pow(-1, (Math.floor(y2 / h))));
				x2 = (x2 + 1) % (2 * w);
				x = (int) (x + Math.pow(-1, (Math.floor(x2 / w))));

                int i;

                for(i = 0; i < w; i++) {
                    System.out.print("~");
                }

                System.out.println("");

                for(i = 0; i < y-1; i++) {
                    System.out.print("~");
                    for(int j = 0; j < w - 2; j++) {
                        System.out.print(" ");
                    }
                    System.out.println("~");
                }

                System.out.print(" ");
                for(i = 0; i < x-1; i++) {
                    System.out.print(" ");
                }

                System.out.print("X");
                for(i = x+1; i < w-1; i++) {
                    System.out.print(" ");
                }

                System.out.println("~");

                for(i = y; i < h - 2; i++) {
                    System.out.print("~");
                    for(int j = 0; j < w - 2; j++) {
                        System.out.print(" ");
                    }
                    System.out.println("~");
                }


                for(i = 0; i < x-1; i++){
                    System.out.print("~");
                }

                System.out.print(" ");
                for(i = x; i < w; i++){
                    System.out.print("#");
                }

			} catch (InterruptedException e) {
				e.printStackTrace();
			}
	    }
}

}
