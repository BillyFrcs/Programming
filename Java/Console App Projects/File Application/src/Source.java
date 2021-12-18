import java.nio.file.Files;
import java.util.*;
import java.io.*;

public class Source {
     private String pesan;
     private String namaFile;
     private String namaFileBaru;
     private int pilihan;

     private Scanner Scan = new Scanner(System.in);

     public static void main(String[] args) throws Exception {
          Source App = new Source();

          FileOutputStream fileSaya = null;
          BufferedWriter tulisFile = null;

          File FileData = null;

          System.out.println(
                    "1.Buat file(.txt atau .md)\n2.Menulis file\n3.Perlihatkan File\n4.Mengganti nama file\n5.Menghapus file");

          System.out.print("\nPilih operasi: ");

          App.pilihan = Integer.parseInt(App.Scan.nextLine());

          switch (App.pilihan) {
               case 1:
                    App.MembuatFileBaru(fileSaya);
                    break;

               case 2:
                    System.out.print("Masukan nama file: ");
                    App.namaFile = App.Scan.nextLine();
                    App.MenulisFile(tulisFile, FileData, App.pesan);
                    break;

               case 3:
                    App.PerlihatkanFile(FileData);
                    break;

               case 4:
                    System.out.print("Masukan nama file yang ingin kamu ganti: ");
                    App.namaFile = App.Scan.nextLine();
                    App.MenggantiNamaFile(FileData);
                    break;

               case 5:
                    System.out.print("Masukan nama file untuk dihapus: ");
                    App.namaFile = App.Scan.next();
                    App.Scan.close();
                    App.MenghapusFile(FileData, App.namaFile);
                    break;

               default:
                    System.out.println("Maaf pilihan anda salah!");
                    break;
          }

          App.Scan.close();
     }

     private void MembuatFileBaru(FileOutputStream fileSaya) {
          try {
               System.out.print("Masukan nama file: ");
               namaFile = Scan.next();
               Scan.close();

               fileSaya = new FileOutputStream(namaFile);

               System.out.println("\nMembuat file " + namaFile + " berhasil.");

               fileSaya.close();
          } catch (IOException error) {
               System.out.println("Error: " + error.getMessage());
          }
     }

     private void MenulisFile(BufferedWriter fileSaya, File data, String pesan) {
          data = new File(namaFile);

          this.pesan = pesan;

          if (data.exists()) {
               try {
                    fileSaya = new BufferedWriter(new FileWriter(namaFile));

                    System.out.print("Masukan sesuatu: ");
                    pesan = Scan.next();
                    Scan.close();

                    char[] c = pesan.toCharArray();

                    for (char w : c) {
                         fileSaya.write(w);
                    }

                    System.out.println("Berhasil menulis didalam file.");

                    fileSaya.close();
               } catch (IOException error) {
                    System.out.println("Error: " + error.getMessage());
               }
          } else {
               System.out.println("Maaf file tidak ditemukan!");
          }
     }

     private void PerlihatkanFile(File data) {
          System.out.print("Enter file name: ");
          namaFile = Scan.next();
          Scan.close();

          data = new File(namaFile);

          if (data.exists()) {
               try {
                    FileInputStream lihatFile = new FileInputStream(namaFile);

                    int bacaFile = lihatFile.read();

                    while (bacaFile != -1) {
                         System.out.print((char) bacaFile);

                         bacaFile = lihatFile.read();
                    }

                    lihatFile.close();
               }

               catch (Exception error) {
                    error.getCause();
               }
          } else {
               System.out.println("Maaf file tidak ditemukan!");
          }
     }

     private void MenggantiNamaFile(File data) throws IOException {
          data = new File(namaFile);

          if (data.exists()) {
               System.out.println("File ditemukan " + namaFile);

               System.out.print("\nMasukan nama file baru yang kamu inginkan: ");
               namaFileBaru = Scan.next();
               Scan.close();

               File FileBaru = new File(data.getParent(), namaFileBaru);

               Files.move(data.toPath(), FileBaru.toPath());

               System.out.println("Nama file berhasil diganti.");
          } else {
               System.out.println("Maaf file tidak ditemukan!");
          }
     }

     private void MenghapusFile(File data, String namaFile) {
          this.namaFile = namaFile;

          data = new File(namaFile);

          if (data.exists()) {
               data.delete();

               System.out.println("Menghapus file " + this.namaFile + " berhasil.");
          } else {
               System.out.println("Maaf file tidak ditemukan!");
          }
     }
}
