package dictionary;

import java.io.IOException;
import java.nio.file.FileSystems;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashSet;
import java.util.LinkedList;
import java.util.List;
import java.util.Set;
import java.util.TreeSet;

public class AllWordsLookup {

	/**
	 * Read a text file line by line returning a list of the lines of text. The file
	 * should be located in the same package as this class.
	 * 
	 * @param filename the name of the file
	 * @return a list containing the lines of the file
	 * @throws RuntimeException if the specified file cannot be found
	 * 
	 */
	public final static List<String> readLines(String filename) {
		Path path = FileSystems.getDefault().getPath("src", "dictionary", filename);
		try {
			return Files.readAllLines(path);
		} catch (IOException ex) {
			throw new RuntimeException("error reading dictionary file");
		}
	}

	/**
	 * Returns a list of all of the words starting with the specified letter found
	 * in the specified list.
	 * 
	 * @param letter a letter between 'a' and 'z', inclusive
	 * @param list   a sorted list of words
	 * @return a list of all of the words starting with the specified letter found
	 *         in the specified list
	 * @throws IllegalArgumentException if the letter is not between 'a' and 'z',
	 *                                  inclusive
	 */
	public static List<String> allWordsStartingWith(char letter, List<String> list) {
		if (letter < 'a' || letter > 'z') {
			throw new IllegalArgumentException();
		}
		int start = Collections.binarySearch(list, "" + letter);
		if (start < 0) {
			start = -start - 1;
		}
		int stop = list.size();
		if (letter != 'z') {
			letter++;
			stop = Collections.binarySearch(list, "" + letter);
			if (stop < 0) {
				stop = -stop - 1;
			}
		}
		return list.subList(start, stop);
	}

	/**
	 * Returns a set of all of the words starting with the specified letter found
	 * in the specified set.
	 * 
	 * @param letter a letter between 'a' and 'z', inclusive
	 * @param set    a set of words
	 * @return a set of all of the words starting with the specified letter found
	 *         in the specified set
	 * @throws IllegalArgumentException if the letter is not between 'a' and 'z',
	 *                                  inclusive
	 */
	public static Set<String> allWordsStartingWith(char letter, HashSet<String> set) {
		if (letter < 'a' || letter > 'z') {
			throw new IllegalArgumentException();
		}
		HashSet<String> words = new HashSet<>();
		String startLetter = "" + letter;
		for (String word : set) {
			if (word.startsWith(startLetter)) {
				words.add(word);
			}
		}
		return words;
	}

	
	/**
	 * Returns a set of all of the words starting with the specified letter found
	 * in the specified set.
	 * 
	 * @param letter a letter between 'a' and 'z', inclusive
	 * @param set    a set of words
	 * @return a set of all of the words starting with the specified letter found
	 *         in the specified set
	 * @throws IllegalArgumentException if the letter is not between 'a' and 'z',
	 *                                  inclusive
	 */
	public static Set<String> allWordsStartingWith(char c, TreeSet<String> set) {
		if (c < 'a' || c > 'z') {
			throw new IllegalArgumentException();
		}
		if (c != 'z') {
			String start = "" + c;
			c++;
			String end = "" + c;
			return set.subSet(start, end);
		}
		return set.tailSet("z");
	}

	public static void main(String[] args) {
		ArrayList<String> arrList = new ArrayList<>(readLines("dictionary2.txt"));
		LinkedList<String> linkedList = new LinkedList<>(arrList);
		HashSet<String> hashSet = new HashSet<>(arrList);
		TreeSet<String> treeSet = new TreeSet<>(arrList);

        // use a for loop to search for all words starting with a through z
		long arrListTime = 0;
		for (char c = 'a'; c <= 'z'; c++) {
			long start = System.nanoTime();
			allWordsStartingWith(c, arrList);
			long stop = System.nanoTime();
			arrListTime += stop - start;
		}

		long linkedListTime = 0;
		for (char c = 'a'; c <= 'z'; c++) {
			long start = System.nanoTime();
			allWordsStartingWith(c, linkedList);
			long stop = System.nanoTime();
			linkedListTime += stop - start;
		}

		long hashSetTime = 0;
		for (char c = 'a'; c <= 'z'; c++) {
			long start = System.nanoTime();
			allWordsStartingWith(c, hashSet);
			long stop = System.nanoTime();
			hashSetTime += stop - start;
		}

		long treeSetTime = 0;
		long start = System.nanoTime();
		for (char c = 'a'; c <= 'z'; c++) {
			allWordsStartingWith(c, treeSet);
		}
		long stop = System.nanoTime();
		treeSetTime += stop - start;

		System.out.println("ArrayList  : 1.0");
		System.out.println("LinkedList : " + (double) linkedListTime / arrListTime);
		System.out.println("HashSet    : " + (double) hashSetTime / arrListTime);
		System.out.println("TreeSet    : " + (double) treeSetTime / arrListTime);
	}
}
