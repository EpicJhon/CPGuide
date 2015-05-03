public class EscapeFromRectangle {

	public static int shortest(int x, int y, int w, int h) {
		int lessX = x;
		int lessY = y;

		lessY = (h - y < lessY) ? h - y : lessY;
		lessX = (w - x < lessX) ? w - x : lessX;

		return (lessY < lessX) ? lessY : lessX;
	}
}
