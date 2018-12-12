/*
 * Definire una superclasse di "Auto" i cui oggetti
 * rappresentino generiche automobili e due sue sottoclassi
 * "Benzina" e "Diesel", i cui oggetti rappresentano
 * automobili alimentate, rispettivamente, a benzina e diesel
 * (ovviamente non esistono automobili non alimentate e si
 * assume che ogni auto sia o a benzina o a diesel).
 *
 * Ci interessa l'aspetto fiscale delle automobili, cioe il
 * calcolo del bollo auto.
 * Queste classi devono soddisfare le seguenti specifiche:
 *
 * - Ogni automobile e caratterizzata dal numero di cavalli fiscali.
 *   La tassa per cavallo e unica per tutte le automobili (sia
 *   benzina che diesel) ed e fissata in 5 euro.
 *   La classe "Auto" fornisce un metodo "tassa()" che ritorna
 *   la tassa di bollo fiscale per l'automobile di invocazione
 *
 * - La classe "Diesel" e dotata di un costruttore ad un parametro
 *   intero x che permette di creare un'auto diesel di x cavalli
 *   fiscali.
 *   Il calcolo del bollo fiscale per un'auto diesel viene fatto
 *   nel seguente modo: si moltiplica il numero di cavalli fiscali
 *   per la tassa per cavallo fiscale e si somma un addizione fiscale
 *   unica per ogni automobile diesel fissata in 100 euro
 *
 * - Un'auto a benzina puo soddisfare o meno la normativa europea
 *   euro4.
 *   La classe "Benzina" e dotata di un costruttore ad un parametro
 *   intero x e ad un parametro booleano b che permette di creare
 *   un'auto a benzina di x cavalli fiscali che soddisfa euro4 se b
 *   vale true, altrimenti che non soddisfa euro4.
 *   Il calcolo dello fiscale per un auto benzina viene fatto nel
 *   seguente modo: si moltiplica il numero di cavalli fiscali per
 *   la tassa per cavallo fiscale; se l'auto soddisfa euro4 allora
 *   si detre un bonus fiscale unico per ogni automobile benzina
 *   fissato in 50 euro, altrimenti non vi e alcuna detrazione.
 *
 * Si definisca inoltre una classe ACI i cui oggetti rappresentano
 * delle filiali ACI addette all'incasso dei bolli auto.
 * Ogni oggetto ACI e caratterizzato da un vector di puntatori
 * ad auto, cioe un oggetto "vector<Auto*>, che rappresenta la lista
 * delle automobili gestite dalla filiale ACI.
 * La classe ACI fornisce un metodo incassaBolli() che ritorna la
 * somma totale dei bolli che devono pagare tutte le auto gestite
 * dalla filiale di invocazione
*/


int main() {}
