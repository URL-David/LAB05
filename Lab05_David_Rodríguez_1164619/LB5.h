#pragma once
#include <cmath>



namespace Lab05DavidRodríguez1164619 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;
	using namespace System::Threading;

	/// <summary>
	/// Resumen de LB5
	/// </summary>
	public ref class LB5 : public System::Windows::Forms::Form
	{
	public:
		LB5(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~LB5()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ txtIngresar;
	protected:

	private: System::Windows::Forms::Button^ btnIngresar;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;



	private: System::Windows::Forms::ListBox^ lbelemento;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Button^ btnBuscar;

	private: System::Windows::Forms::TextBox^ txtbuscar;
	private: System::Windows::Forms::GroupBox^ groupBox5;

	private: System::Windows::Forms::GroupBox^ groupBox7;
	private: System::Windows::Forms::GroupBox^ groupBox10;
	private: System::Windows::Forms::Label^ lblTbin;
	private: System::Windows::Forms::GroupBox^ groupBox8;
	private: System::Windows::Forms::GroupBox^ groupBox11;
	private: System::Windows::Forms::Label^ lblTHash;
	private: System::Windows::Forms::GroupBox^ groupBox6;
	private: System::Windows::Forms::Button^ btnIseq;
	private: System::Windows::Forms::TextBox^ txtIseq;


	private: System::Windows::Forms::GroupBox^ groupBox9;
	private: System::Windows::Forms::Label^ lblTseq;
	private: System::Windows::Forms::Button^ btnIbin;
	private: System::Windows::Forms::TextBox^ txtIbin;
	private: System::Windows::Forms::Button^ btnIHash;
	private: System::Windows::Forms::TextBox^ txtIHash;


	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ lblTbin2;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ lblTHash2;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ lblTseq2;
	private: System::Windows::Forms::Button^ button1;

	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->txtIngresar = (gcnew System::Windows::Forms::TextBox());
			this->btnIngresar = (gcnew System::Windows::Forms::Button());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->lbelemento = (gcnew System::Windows::Forms::ListBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->btnIbin = (gcnew System::Windows::Forms::Button());
			this->txtIbin = (gcnew System::Windows::Forms::TextBox());
			this->groupBox10 = (gcnew System::Windows::Forms::GroupBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->lblTbin2 = (gcnew System::Windows::Forms::Label());
			this->lblTbin = (gcnew System::Windows::Forms::Label());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->btnIHash = (gcnew System::Windows::Forms::Button());
			this->txtIHash = (gcnew System::Windows::Forms::TextBox());
			this->groupBox11 = (gcnew System::Windows::Forms::GroupBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->lblTHash2 = (gcnew System::Windows::Forms::Label());
			this->lblTHash = (gcnew System::Windows::Forms::Label());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->btnIseq = (gcnew System::Windows::Forms::Button());
			this->txtIseq = (gcnew System::Windows::Forms::TextBox());
			this->groupBox9 = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->lblTseq2 = (gcnew System::Windows::Forms::Label());
			this->lblTseq = (gcnew System::Windows::Forms::Label());
			this->btnBuscar = (gcnew System::Windows::Forms::Button());
			this->txtbuscar = (gcnew System::Windows::Forms::TextBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->groupBox10->SuspendLayout();
			this->groupBox8->SuspendLayout();
			this->groupBox11->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox9->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->txtIngresar);
			this->groupBox1->Controls->Add(this->btnIngresar);
			this->groupBox1->Location = System::Drawing::Point(20, 28);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(311, 113);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Ingresar Cantidad de números aleatorios";
			// 
			// txtIngresar
			// 
			this->txtIngresar->Location = System::Drawing::Point(53, 37);
			this->txtIngresar->Name = L"txtIngresar";
			this->txtIngresar->Size = System::Drawing::Size(216, 20);
			this->txtIngresar->TabIndex = 1;
			// 
			// btnIngresar
			// 
			this->btnIngresar->Location = System::Drawing::Point(63, 63);
			this->btnIngresar->Name = L"btnIngresar";
			this->btnIngresar->Size = System::Drawing::Size(193, 44);
			this->btnIngresar->TabIndex = 0;
			this->btnIngresar->Text = L"Ingresar";
			this->btnIngresar->UseVisualStyleBackColor = true;
			this->btnIngresar->Click += gcnew System::EventHandler(this, &LB5::btnIngresar_Click);
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->lbelemento);
			this->groupBox5->Location = System::Drawing::Point(111, 153);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(120, 230);
			this->groupBox5->TabIndex = 1;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Números";
			// 
			// lbelemento
			// 
			this->lbelemento->FormattingEnabled = true;
			this->lbelemento->Location = System::Drawing::Point(27, 19);
			this->lbelemento->Name = L"lbelemento";
			this->lbelemento->Size = System::Drawing::Size(77, 186);
			this->lbelemento->TabIndex = 1;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->groupBox7);
			this->groupBox3->Controls->Add(this->groupBox8);
			this->groupBox3->Controls->Add(this->groupBox6);
			this->groupBox3->Controls->Add(this->btnBuscar);
			this->groupBox3->Controls->Add(this->txtbuscar);
			this->groupBox3->Location = System::Drawing::Point(337, 19);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(499, 393);
			this->groupBox3->TabIndex = 3;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Buscar valor";
			this->groupBox3->Enter += gcnew System::EventHandler(this, &LB5::groupBox3_Enter);
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->btnIbin);
			this->groupBox7->Controls->Add(this->txtIbin);
			this->groupBox7->Controls->Add(this->groupBox10);
			this->groupBox7->Location = System::Drawing::Point(6, 238);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(484, 70);
			this->groupBox7->TabIndex = 3;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"De forma binaria";
			// 
			// btnIbin
			// 
			this->btnIbin->Location = System::Drawing::Point(106, 19);
			this->btnIbin->Name = L"btnIbin";
			this->btnIbin->Size = System::Drawing::Size(186, 42);
			this->btnIbin->TabIndex = 4;
			this->btnIbin->Text = L"Ingresar";
			this->btnIbin->UseVisualStyleBackColor = true;
			this->btnIbin->Click += gcnew System::EventHandler(this, &LB5::btnIbin_Click);
			// 
			// txtIbin
			// 
			this->txtIbin->Location = System::Drawing::Point(41, 30);
			this->txtIbin->Name = L"txtIbin";
			this->txtIbin->Size = System::Drawing::Size(28, 20);
			this->txtIbin->TabIndex = 3;
			// 
			// groupBox10
			// 
			this->groupBox10->Controls->Add(this->label6);
			this->groupBox10->Controls->Add(this->lblTbin2);
			this->groupBox10->Controls->Add(this->lblTbin);
			this->groupBox10->Location = System::Drawing::Point(322, 33);
			this->groupBox10->Name = L"groupBox10";
			this->groupBox10->Size = System::Drawing::Size(156, 31);
			this->groupBox10->TabIndex = 1;
			this->groupBox10->TabStop = false;
			this->groupBox10->Text = L"Tiempo";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(72, 15);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(10, 13);
			this->label6->TabIndex = 3;
			this->label6->Text = L"-";
			// 
			// lblTbin2
			// 
			this->lblTbin2->AutoSize = true;
			this->lblTbin2->Location = System::Drawing::Point(6, 15);
			this->lblTbin2->Name = L"lblTbin2";
			this->lblTbin2->Size = System::Drawing::Size(49, 13);
			this->lblTbin2->TabIndex = 1;
			this->lblTbin2->Text = L"00:00.00";
			// 
			// lblTbin
			// 
			this->lblTbin->AutoSize = true;
			this->lblTbin->Location = System::Drawing::Point(101, 16);
			this->lblTbin->Name = L"lblTbin";
			this->lblTbin->Size = System::Drawing::Size(49, 13);
			this->lblTbin->TabIndex = 0;
			this->lblTbin->Text = L"00:00.00";
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->btnIHash);
			this->groupBox8->Controls->Add(this->txtIHash);
			this->groupBox8->Controls->Add(this->groupBox11);
			this->groupBox8->Location = System::Drawing::Point(6, 314);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(484, 70);
			this->groupBox8->TabIndex = 3;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"Hash";
			// 
			// btnIHash
			// 
			this->btnIHash->Location = System::Drawing::Point(106, 19);
			this->btnIHash->Name = L"btnIHash";
			this->btnIHash->Size = System::Drawing::Size(186, 42);
			this->btnIHash->TabIndex = 6;
			this->btnIHash->Text = L"Ingresar";
			this->btnIHash->UseVisualStyleBackColor = true;
			this->btnIHash->Click += gcnew System::EventHandler(this, &LB5::btnIHash_Click);
			// 
			// txtIHash
			// 
			this->txtIHash->Location = System::Drawing::Point(41, 30);
			this->txtIHash->Name = L"txtIHash";
			this->txtIHash->Size = System::Drawing::Size(28, 20);
			this->txtIHash->TabIndex = 5;
			// 
			// groupBox11
			// 
			this->groupBox11->Controls->Add(this->label7);
			this->groupBox11->Controls->Add(this->lblTHash2);
			this->groupBox11->Controls->Add(this->lblTHash);
			this->groupBox11->Location = System::Drawing::Point(322, 33);
			this->groupBox11->Name = L"groupBox11";
			this->groupBox11->Size = System::Drawing::Size(156, 31);
			this->groupBox11->TabIndex = 1;
			this->groupBox11->TabStop = false;
			this->groupBox11->Text = L"Tiempo";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(72, 15);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(10, 13);
			this->label7->TabIndex = 4;
			this->label7->Text = L"-";
			// 
			// lblTHash2
			// 
			this->lblTHash2->AutoSize = true;
			this->lblTHash2->Location = System::Drawing::Point(6, 15);
			this->lblTHash2->Name = L"lblTHash2";
			this->lblTHash2->Size = System::Drawing::Size(49, 13);
			this->lblTHash2->TabIndex = 2;
			this->lblTHash2->Text = L"00:00.00";
			// 
			// lblTHash
			// 
			this->lblTHash->AutoSize = true;
			this->lblTHash->Location = System::Drawing::Point(101, 15);
			this->lblTHash->Name = L"lblTHash";
			this->lblTHash->Size = System::Drawing::Size(49, 13);
			this->lblTHash->TabIndex = 0;
			this->lblTHash->Text = L"00:00.00";
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->btnIseq);
			this->groupBox6->Controls->Add(this->txtIseq);
			this->groupBox6->Controls->Add(this->groupBox9);
			this->groupBox6->Location = System::Drawing::Point(6, 162);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(484, 70);
			this->groupBox6->TabIndex = 2;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Secuencialmente";
			// 
			// btnIseq
			// 
			this->btnIseq->Location = System::Drawing::Point(106, 19);
			this->btnIseq->Name = L"btnIseq";
			this->btnIseq->Size = System::Drawing::Size(186, 42);
			this->btnIseq->TabIndex = 2;
			this->btnIseq->Text = L"Ingresar";
			this->btnIseq->UseVisualStyleBackColor = true;
			this->btnIseq->Click += gcnew System::EventHandler(this, &LB5::button1_Click);
			// 
			// txtIseq
			// 
			this->txtIseq->Location = System::Drawing::Point(41, 30);
			this->txtIseq->Name = L"txtIseq";
			this->txtIseq->Size = System::Drawing::Size(28, 20);
			this->txtIseq->TabIndex = 1;
			// 
			// groupBox9
			// 
			this->groupBox9->Controls->Add(this->label5);
			this->groupBox9->Controls->Add(this->lblTseq2);
			this->groupBox9->Controls->Add(this->lblTseq);
			this->groupBox9->Location = System::Drawing::Point(322, 33);
			this->groupBox9->Name = L"groupBox9";
			this->groupBox9->Size = System::Drawing::Size(156, 31);
			this->groupBox9->TabIndex = 0;
			this->groupBox9->TabStop = false;
			this->groupBox9->Text = L"Tiempo";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(72, 15);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(10, 13);
			this->label5->TabIndex = 2;
			this->label5->Text = L"-";
			// 
			// lblTseq2
			// 
			this->lblTseq2->AutoSize = true;
			this->lblTseq2->Location = System::Drawing::Point(6, 15);
			this->lblTseq2->Name = L"lblTseq2";
			this->lblTseq2->Size = System::Drawing::Size(49, 13);
			this->lblTseq2->TabIndex = 1;
			this->lblTseq2->Text = L"00:00.00";
			// 
			// lblTseq
			// 
			this->lblTseq->AutoSize = true;
			this->lblTseq->Location = System::Drawing::Point(101, 15);
			this->lblTseq->Name = L"lblTseq";
			this->lblTseq->Size = System::Drawing::Size(49, 13);
			this->lblTseq->TabIndex = 0;
			this->lblTseq->Text = L"00:00.00";
			// 
			// btnBuscar
			// 
			this->btnBuscar->Location = System::Drawing::Point(47, 72);
			this->btnBuscar->Name = L"btnBuscar";
			this->btnBuscar->Size = System::Drawing::Size(383, 57);
			this->btnBuscar->TabIndex = 1;
			this->btnBuscar->Text = L"Buscar";
			this->btnBuscar->UseVisualStyleBackColor = true;
			this->btnBuscar->Click += gcnew System::EventHandler(this, &LB5::btnBuscar_Click);
			// 
			// txtbuscar
			// 
			this->txtbuscar->Enabled = false;
			this->txtbuscar->Location = System::Drawing::Point(151, 43);
			this->txtbuscar->Name = L"txtbuscar";
			this->txtbuscar->Size = System::Drawing::Size(180, 20);
			this->txtbuscar->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(13, 395);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Cerrar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &LB5::button1_Click_1);
			// 
			// LB5
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(861, 430);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox1);
			this->Name = L"LB5";
			this->Text = L"LB5";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->groupBox10->ResumeLayout(false);
			this->groupBox10->PerformLayout();
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			this->groupBox11->ResumeLayout(false);
			this->groupBox11->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->groupBox9->ResumeLayout(false);
			this->groupBox9->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		
		static int Numaleatorios;
		Hashtable^ miTabla = gcnew Hashtable();
		Stopwatch^ Time = gcnew Stopwatch();
		Stopwatch^ TimeT = gcnew Stopwatch();
		int R1;
		int R2;
		int R3;
	private: System::Void btnIngresar_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
		
			if (txtIngresar->Text != "") {
				int Random;
				Numaleatorios = Convert::ToInt32(txtIngresar->Text);
				txtIngresar->Text = "";
				if (Numaleatorios > 0)
				{

					for (int x = 0; x < Numaleatorios; x++)
					{
						Random = 1 + rand() % (100);
						miTabla->Add(x, Random);
					}
					lbelemento->Items->Clear();
					
					for each (DictionaryEntry elemento in miTabla)
					{
		
						lbelemento->Items->Add(elemento.Value);
					}
					txtbuscar->Enabled = true;
					btnBuscar->Enabled = true;
					btnIngresar->Enabled = false;
				}

			}

		}
		catch (Exception^ e)
		{
			txtIngresar->Text = "";
		}
		
	}
	private: System::Void groupBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
		  
	private: System::Void btnBuscar_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			btnBuscar->Enabled = false;
			txtbuscar->Enabled = false;
			
			Time->Start();
			TimeT->Start();

			if (txtbuscar->Text != "")
			{
				
				Time->Start();
			
				int valor = Convert::ToInt32(txtbuscar->Text);
				int i = 0;
				{


					R1 = BusquedaSecuencial(Numaleatorios, valor);
				}

				for (int i = 0; i < Numaleatorios - 1; i++) {
					for (int j = i + 1; j < Numaleatorios; j++) {
						if (Convert::ToInt32(miTabla[j]) < Convert::ToInt32(miTabla[i]))
						{
							int temp = Convert::ToInt32(miTabla[j]);
							miTabla[j] = miTabla[i];
							miTabla[i] = temp;
						}
					}
				}




				R2 = BusquedaBinaria(0, Numaleatorios - 1, valor);

				int vec[99];

				for (int i = 0; i < 99; i++) {
					vec[i] = 0;
				}

				for (int i = 0; i < Numaleatorios; i++) {
					vec[(Convert::ToInt32(miTabla[i])) % 99] = Convert::ToInt32(miTabla[i]);
				}

				R3 = BusquedaHash(vec, 99, valor);

				txtbuscar->Text = "";
				txtbuscar->Enabled = true;
			}
		}
		catch (Exception^ e)
		{
			txtbuscar->Text = "";
		}
		
		

	}
		   
		   int BusquedaSecuencial( int count, int value) {
			   for (int i = 0; i < count; i++) {
				   if (Convert::ToUInt32(miTabla[i]) == value) {
					   return i;
				   }
			   }
			   return -1;
		   }

		

			int BusquedaBinaria( int inf, int sup, int value) {
				if (inf > sup)
					return -1;

				int mitad = inf + (((sup + 1) - inf) / 2);
				int pivote = Convert::ToInt32(miTabla[mitad]);

				if (pivote == value) {
					return mitad;
				}
				else {
					if (pivote > value)
						return BusquedaBinaria(inf, mitad - 1, value);
					else
						return BusquedaBinaria(mitad + 1, sup, value);
				}
			}

			int BusquedaHash(int arreglo[], int count, int value) {
				if (arreglo[value % count] == value)
					return (value % count);
				else
					return -1;
			}
			
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			if (R1 == Convert::ToInt32(txtIseq->Text))
			{
				Time->Stop();

				TimeSpan ts = TimeT->Elapsed;


				String^ elapsedTime = String::Format("{1:00}:{2:00}.{3:00}",
					ts.Hours, ts.Minutes, ts.Seconds,
					ts.Milliseconds / 10);
				lblTseq->Text = (elapsedTime);

				TimeSpan ts2 = Time->Elapsed;


				String^ elapsedTime2 = String::Format("{1:00}:{2:00}.{3:00}",
					ts2.Hours, ts2.Minutes, ts2.Seconds,
					ts2.Milliseconds / 10);
				lblTseq2->Text = (elapsedTime2);

				Time->Restart();
			}
			else
			{
				txtIseq->Text = "";
			}
		}
		catch (Exception^e)
		{
			txtIseq->Text = "";
		}
		
		
	}
private: System::Void groupBox3_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnIbin_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		if (R2 == Convert::ToInt32(txtIbin->Text))
		{
			Time->Stop();

			TimeSpan ts = TimeT->Elapsed;


			String^ elapsedTime = String::Format("{1:00}:{2:00}.{3:00}",
				ts.Hours, ts.Minutes, ts.Seconds,
				ts.Milliseconds / 10);
			lblTbin->Text = (elapsedTime);
			
			TimeSpan ts2 = Time->Elapsed;


			String^ elapsedTime2 = String::Format("{1:00}:{2:00}.{3:00}",
				ts2.Hours, ts2.Minutes, ts2.Seconds,
				ts2.Milliseconds / 10);
			lblTbin2->Text = (elapsedTime2);

			Time->Restart();
		}
		else
		{
			txtIbin->Text = "";
		}
	}
	catch (Exception^ e)
	{
		txtIbin->Text = "";
	}
}
private: System::Void btnIHash_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		if (R3 == Convert::ToInt32(txtIHash->Text))
		{
			Time->Stop();

			TimeSpan ts = TimeT->Elapsed;


			String^ elapsedTime = String::Format("{1:00}:{2:00}.{3:00}",
				ts.Hours, ts.Minutes, ts.Seconds,
				ts.Milliseconds / 10);
			lblTHash->Text = (elapsedTime);
			
			TimeSpan ts2 = Time->Elapsed;


			String^ elapsedTime2 = String::Format("{1:00}:{2:00}.{3:00}",
				ts2.Hours, ts2.Minutes, ts2.Seconds,
				ts2.Milliseconds / 10);
			lblTHash2->Text = (elapsedTime2);
		
			
		}
		else
		{
			txtIHash->Text = "";
		}
	}
	catch (Exception^ e)
	{
		txtIHash->Text = "";
	}

}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
		   
	}
