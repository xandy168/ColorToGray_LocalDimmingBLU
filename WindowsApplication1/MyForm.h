#pragma once

namespace WindowsApplication1
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// MyForm ���K�n
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO:  �b���[�J�غc�禡�{���X
			//
		}

	protected:
		/// <summary>
		/// �M������ϥΤ����귽�C
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^ button3;


	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;



	protected:



	protected:

	private:
		/// <summary>
		/// �]�p�u��һݪ��ܼơC
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����]�p�u��䴩�һݪ���k - �ФŨϥε{���X�s�边�ק�
		/// �o�Ӥ�k�����e�C
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(13, 13);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(159, 42);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Ū���v����(3:2)";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(13, 13);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(3000, 2000);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(200, 13);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(117, 42);
			this->button2->TabIndex = 2;
			this->button2->Text = L"�ন�Ƕ���";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(345, 12);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(178, 43);
			this->button3->TabIndex = 3;
			this->button3->Text = L"�t��k�@60��";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(345, 70);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(178, 43);
			this->button4->TabIndex = 6;
			this->button4->Text = L"�t��k�G(����)60��";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click_1);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(345, 131);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(178, 45);
			this->button5->TabIndex = 7;
			this->button5->Text = L"100*125=12500��";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(2978, 1050);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"TPK 13.5�TLocal Dimming DEMO ( Design By DSC )_V200330";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		//�ŧiBitmap �x�s�}�Ҫ���
		Bitmap^ image1;

		//�ŧi���@BitmapData���A ��ܹ�����m
		Imaging::BitmapData ^ ImageData1;

		//�ŧi�Ϲ��ϰ�(�]�w����Ū���B���ץ����Ϲ��ϰ�)
		Rectangle rect;

		//�ŧi�@int�榡������
		IntPtr ptr, ResultPtr;

		//�ŧiByte�榡������
		Byte* p;
		Byte* R;
#pragma endregion
	private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {

		//new�@�ӷs��openFileDialog1�}���ɮ�
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
		//�]�wFilter�A�ΥH���w�ϥΪ̶}�Ҫ��ɮ�
		openFileDialog1->Filter = "�I�}�� (*.bmp)| *.bmp| All files (*.*)| *.*";
		//�w�]�ɮצW�٬��ŭ�
		openFileDialog1->FileName = "";
		//�]�w���X��ܵ��������D�W��
		openFileDialog1->Title = "���J�v��";
		//�]�wFilter��ܼҦ�(�̷�Filter�ơA�p���ҿ��1��ܰ_�l�X�{�����I�}�ϡA���2���All filts)
	    openFileDialog1->FilterIndex = 1;


		//���X�ɮ׿�ܵ���(ShowDialog)�A�åB�p�G�ϥΪ��I���ɮסA�åB�ɮצW�ٶW�L0�Ӧr���A�h�P�_�O��True�A�i�J�B�z�{��
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK && openFileDialog1->FileName->Length > 0)
		{
			//�N������ɮ�Ū���åB�s��Image1
			image1 = safe_cast<Bitmap^>(Image::FromFile(openFileDialog1->FileName));
			//�]�wrect�d��j�p
			rect = Rectangle(0, 0, image1->Width, image1->Height);
			//�N�v����ܦbpictureBox1
			pictureBox1->Image = image1;
		}
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		//�v����Ƕ�

		//�ŧigrayImage��BitMap^���A
		Bitmap^ grayImage;

		grayImage = gcnew Bitmap(image1->Width, image1->Height);
		//�ŧigrayImageData��BitmapData^���A�A��ܹ�����Ʀ�m
		Imaging::BitmapData^ grayImageData;
		//��w���B�z������m
		grayImageData = grayImage->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, image1->PixelFormat);
		//�Nint���Ы��VImage������ƪ��̫e����m
		ResultPtr = grayImageData->Scan0;
		//�]�w����
		R = (Byte*)((Void*)ResultPtr);

		//��w��ϱ��B�z������m
		ImageData1 = image1->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, image1->PixelFormat);
		//�Nint���Ы��V��Ϲ�����Ƴ̫e����m
		ptr = ImageData1->Scan0;
		//�]�w����
		p = (Byte*)((Void*)ptr);

		//�s���Ҧ������I�A���ι����A�B�z�����ϰ�
		for (int y = 0; y < image1->Height; y++)
		{
			for (int x = 0; x < image1->Width; x++)
			{
				int pixel = (p[0] * 0.114 + p[1]*0.587 + p[2]*0.299);
				

				R[0] = (Byte)pixel;
				R[1] = (Byte)pixel;
				R[2] = (Byte)pixel;

				R += 3;
				p += 3;
			}
		}

		//���깳����m
		image1->UnlockBits(ImageData1);
		grayImage->UnlockBits(grayImageData);
		//��ܦbPictureBox�W
		pictureBox1->Image = grayImage;
	}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

};
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
{
	//�v����Ƕ�

//�ŧigrayImage��BitMap^���A
	Bitmap^ grayImage;

	grayImage = gcnew Bitmap(image1->Width, image1->Height);
	//�ŧigrayImageData��BitmapData^���A�A��ܹ�����Ʀ�m
	Imaging::BitmapData^ grayImageData;
	//��w���B�z������m
	grayImageData = grayImage->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, image1->PixelFormat);
	//�Nint���Ы��VImage������ƪ��̫e����m
	ResultPtr = grayImageData->Scan0;
	//�]�w����
	R = (Byte*)((Void*)ResultPtr);

	//��w��ϱ��B�z������m
	ImageData1 = image1->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, image1->PixelFormat);
	//�Nint���Ы��V��Ϲ�����Ƴ̫e����m
	ptr = ImageData1->Scan0;
	//�]�w����
	p = (Byte*)((Void*)ptr);

	//�s���Ҧ������I�A���ι����A�B�z�����ϰ�
		//for (int y = 0; y < image1->Height; y++)
	int z[60][60];
	const int dimX = 30, dimY = 2;
	for (int dim1 = 0; dim1 < dimY; dim1++)
	{
		for (int y = 0; y < image1->Height / dimY; y++)
		{
			for (int dim2 = 0; dim2 < dimX; dim2++)
			{
				for (int x = 0; x < image1->Width / dimX; x++)
				{
					int pixel = (p[0] * 0.114 + p[1] * 0.587 + p[2] * 0.299); // RGB��
					z[dim2][dim1] = (z[dim2][dim1] + pixel) / 2;
					p += 3;
				}
			}

		}
	}

	for (int dim3 = 0; dim3 < dimY; dim3++)
	{
		for (int y = 0; y < image1->Height / dimY; y++)
		{
			for (int dim4 = 0; dim4 < dimX; dim4++)
			{
				for (int x = 0; x < image1->Width / dimX; x++)
				{
					R[0] = (Byte)z[dim4][dim3];
					R[1] = (Byte)z[dim4][dim3];
					R[2] = (Byte)z[dim4][dim3];
					R += 3;
				}
			}

		}
	}

	//���깳����m
	image1->UnlockBits(ImageData1);
	grayImage->UnlockBits(grayImageData);
	//��ܦbPictureBox�W
	pictureBox1->Image = grayImage;
	
}
private: System::Void button4_Click_1(System::Object^ sender, System::EventArgs^ e) {
	//�v����Ƕ�

//�ŧigrayImage��BitMap^���A
	Bitmap^ grayImage;

	grayImage = gcnew Bitmap(image1->Width, image1->Height);
	//�ŧigrayImageData��BitmapData^���A�A��ܹ�����Ʀ�m
	Imaging::BitmapData^ grayImageData;
	//��w���B�z������m
	grayImageData = grayImage->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, image1->PixelFormat);
	//�Nint���Ы��VImage������ƪ��̫e����m
	ResultPtr = grayImageData->Scan0;
	//�]�w����
	R = (Byte*)((Void*)ResultPtr);

	//��w��ϱ��B�z������m
	ImageData1 = image1->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, image1->PixelFormat);
	//�Nint���Ы��V��Ϲ�����Ƴ̫e����m
	ptr = ImageData1->Scan0;
	//�]�w����
	p = (Byte*)((Void*)ptr);

	
	//�s���Ҧ������I�A���ι����A�B�z�����ϰ�
	//for (int y = 0; y < image1->Height; y++)
	int z[60][60];
	const int dimX = 30, dimY = 2;
	for (int dim1 = 0; dim1 < dimY; dim1++)
	{
		for (int y = 0; y < image1->Height / dimY; y++)
		{
			for (int dim2 = 0; dim2 < dimX; dim2++)
			{
				for (int x = 0; x < image1->Width / dimX; x++)
				{
					//int pixel = (p[0] * 0.114 + p[1] * 0.587 + p[2] * 0.299);
					int pixel = (p[0]  + p[1] + p[2])/3; // ����RGB
					
					z[dim2][dim1] = (z[dim2][dim1] + pixel) / 2;
					p += 3;
				}
			}

		}
	}

	for (int dim3 = 0; dim3 < dimY; dim3++)
	{
		for (int y = 0; y < image1->Height / dimY; y++)
		{
			for (int dim4 = 0; dim4 < dimX; dim4++)
			{
				for (int x = 0; x < image1->Width / dimX; x++)
				{
					R[0] = (Byte)z[dim4][dim3];
					R[1] = (Byte)z[dim4][dim3];
					R[2] = (Byte)z[dim4][dim3];
					R += 3;
				}
			}

		}
	}


	//���깳����m
	image1->UnlockBits(ImageData1);
	grayImage->UnlockBits(grayImageData);
	//��ܦbPictureBox�W
	pictureBox1->Image = grayImage;
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

	//�v����Ƕ�

//�ŧigrayImage��BitMap^���A
	Bitmap^ grayImage;

	grayImage = gcnew Bitmap(image1->Width, image1->Height);
	//�ŧigrayImageData��BitmapData^���A�A��ܹ�����Ʀ�m
	Imaging::BitmapData^ grayImageData;
	//��w���B�z������m
	grayImageData = grayImage->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, image1->PixelFormat);
	//�Nint���Ы��VImage������ƪ��̫e����m
	ResultPtr = grayImageData->Scan0;
	//�]�w����
	R = (Byte*)((Void*)ResultPtr);

	//��w��ϱ��B�z������m
	ImageData1 = image1->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, image1->PixelFormat);
	//�Nint���Ы��V��Ϲ�����Ƴ̫e����m
	ptr = ImageData1->Scan0;
	//�]�w����
	p = (Byte*)((Void*)ptr);


	//�s���Ҧ������I�A���ι����A�B�z�����ϰ�
	//for (int y = 0; y < image1->Height; y++)
	int z[200][200];
	const int dimX = 100, dimY = 125;
	for (int dim1 = 0; dim1 < dimY; dim1++)
	{
		for (int y = 0; y < image1->Height / dimY; y++)
		{
			for (int dim2 = 0; dim2 < dimX; dim2++)
			{
				for (int x = 0; x < image1->Width / dimX; x++)
				{
					//int pixel = (p[0] * 0.114 + p[1] * 0.587 + p[2] * 0.299);
					int pixel = (p[0] + p[1] + p[2]) / 3; // ����RGB

					z[dim2][dim1] = (z[dim2][dim1] + pixel) / 2;
					p += 3;
				}
			}

		}
	}

	for (int dim3 = 0; dim3 < dimY; dim3++)
	{
		for (int y = 0; y < image1->Height / dimY; y++)
		{
			for (int dim4 = 0; dim4 < dimX; dim4++)
			{
				for (int x = 0; x < image1->Width / dimX; x++)
				{
					R[0] = (Byte)z[dim4][dim3];
					R[1] = (Byte)z[dim4][dim3];
					R[2] = (Byte)z[dim4][dim3];
					R += 3;
				}
			}

		}
	}

	//���깳����m
	image1->UnlockBits(ImageData1);
	grayImage->UnlockBits(grayImageData);
	//��ܦbPictureBox�W
	pictureBox1->Image = grayImage;

}
};
}