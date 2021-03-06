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
	/// MyForm 的摘要
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO:  在此加入建構函式程式碼
			//
		}

	protected:
		/// <summary>
		/// 清除任何使用中的資源。
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
		/// 設計工具所需的變數。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器修改
		/// 這個方法的內容。
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
			this->button1->Text = L"讀取影像檔(3:2)";
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
			this->button2->Text = L"轉成灰階圖";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(345, 12);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(178, 43);
			this->button3->TabIndex = 3;
			this->button3->Text = L"演算法一60區";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(345, 70);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(178, 43);
			this->button4->TabIndex = 6;
			this->button4->Text = L"演算法二(平均)60區";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click_1);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(345, 131);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(178, 45);
			this->button5->TabIndex = 7;
			this->button5->Text = L"100*125=12500區";
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
			this->Text = L"TPK 13.5吋Local Dimming DEMO ( Design By DSC )_V200330";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		//宣告Bitmap 儲存開啟的圖
		Bitmap^ image1;

		//宣告為一BitmapData型態 表示像素位置
		Imaging::BitmapData ^ ImageData1;

		//宣告圖像區域(設定為欲讀取、欲修正的圖像區域)
		Rectangle rect;

		//宣告一int格式的指標
		IntPtr ptr, ResultPtr;

		//宣告Byte格式的指標
		Byte* p;
		Byte* R;
#pragma endregion
	private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {

		//new一個新的openFileDialog1開啟檔案
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
		//設定Filter，用以限定使用者開啟的檔案
		openFileDialog1->Filter = "點陣圖 (*.bmp)| *.bmp| All files (*.*)| *.*";
		//預設檔案名稱為空值
		openFileDialog1->FileName = "";
		//設定跳出選擇視窗的標題名稱
		openFileDialog1->Title = "載入影像";
		//設定Filter選擇模式(依照Filter數，如本例選擇1表示起始出現的為點陣圖，選擇2表示All filts)
	    openFileDialog1->FilterIndex = 1;


		//跳出檔案選擇視窗(ShowDialog)，並且如果使用者點選檔案，並且檔案名稱超過0個字元，則判斷是為True，進入處理程序
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK && openFileDialog1->FileName->Length > 0)
		{
			//將選取的檔案讀取並且存至Image1
			image1 = safe_cast<Bitmap^>(Image::FromFile(openFileDialog1->FileName));
			//設定rect範圍大小
			rect = Rectangle(0, 0, image1->Width, image1->Height);
			//將影像顯示在pictureBox1
			pictureBox1->Image = image1;
		}
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		//影像轉灰階

		//宣告grayImage為BitMap^型態
		Bitmap^ grayImage;

		grayImage = gcnew Bitmap(image1->Width, image1->Height);
		//宣告grayImageData為BitmapData^型態，表示像素資料位置
		Imaging::BitmapData^ grayImageData;
		//鎖定欲處理像素位置
		grayImageData = grayImage->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, image1->PixelFormat);
		//將int指標指向Image像素資料的最前面位置
		ResultPtr = grayImageData->Scan0;
		//設定指標
		R = (Byte*)((Void*)ResultPtr);

		//鎖定原圖欲處理像素位置
		ImageData1 = image1->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, image1->PixelFormat);
		//將int指標指向原圖像素資料最前面位置
		ptr = ImageData1->Scan0;
		//設定指標
		p = (Byte*)((Void*)ptr);

		//瀏覽所有像素點，取用像素，處理像素區域
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

		//解鎖像素位置
		image1->UnlockBits(ImageData1);
		grayImage->UnlockBits(grayImageData);
		//顯示在PictureBox上
		pictureBox1->Image = grayImage;
	}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

};
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
{
	//影像轉灰階

//宣告grayImage為BitMap^型態
	Bitmap^ grayImage;

	grayImage = gcnew Bitmap(image1->Width, image1->Height);
	//宣告grayImageData為BitmapData^型態，表示像素資料位置
	Imaging::BitmapData^ grayImageData;
	//鎖定欲處理像素位置
	grayImageData = grayImage->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, image1->PixelFormat);
	//將int指標指向Image像素資料的最前面位置
	ResultPtr = grayImageData->Scan0;
	//設定指標
	R = (Byte*)((Void*)ResultPtr);

	//鎖定原圖欲處理像素位置
	ImageData1 = image1->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, image1->PixelFormat);
	//將int指標指向原圖像素資料最前面位置
	ptr = ImageData1->Scan0;
	//設定指標
	p = (Byte*)((Void*)ptr);

	//瀏覽所有像素點，取用像素，處理像素區域
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
					int pixel = (p[0] * 0.114 + p[1] * 0.587 + p[2] * 0.299); // RGB比重
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

	//解鎖像素位置
	image1->UnlockBits(ImageData1);
	grayImage->UnlockBits(grayImageData);
	//顯示在PictureBox上
	pictureBox1->Image = grayImage;
	
}
private: System::Void button4_Click_1(System::Object^ sender, System::EventArgs^ e) {
	//影像轉灰階

//宣告grayImage為BitMap^型態
	Bitmap^ grayImage;

	grayImage = gcnew Bitmap(image1->Width, image1->Height);
	//宣告grayImageData為BitmapData^型態，表示像素資料位置
	Imaging::BitmapData^ grayImageData;
	//鎖定欲處理像素位置
	grayImageData = grayImage->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, image1->PixelFormat);
	//將int指標指向Image像素資料的最前面位置
	ResultPtr = grayImageData->Scan0;
	//設定指標
	R = (Byte*)((Void*)ResultPtr);

	//鎖定原圖欲處理像素位置
	ImageData1 = image1->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, image1->PixelFormat);
	//將int指標指向原圖像素資料最前面位置
	ptr = ImageData1->Scan0;
	//設定指標
	p = (Byte*)((Void*)ptr);

	
	//瀏覽所有像素點，取用像素，處理像素區域
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
					int pixel = (p[0]  + p[1] + p[2])/3; // 平均RGB
					
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


	//解鎖像素位置
	image1->UnlockBits(ImageData1);
	grayImage->UnlockBits(grayImageData);
	//顯示在PictureBox上
	pictureBox1->Image = grayImage;
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

	//影像轉灰階

//宣告grayImage為BitMap^型態
	Bitmap^ grayImage;

	grayImage = gcnew Bitmap(image1->Width, image1->Height);
	//宣告grayImageData為BitmapData^型態，表示像素資料位置
	Imaging::BitmapData^ grayImageData;
	//鎖定欲處理像素位置
	grayImageData = grayImage->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, image1->PixelFormat);
	//將int指標指向Image像素資料的最前面位置
	ResultPtr = grayImageData->Scan0;
	//設定指標
	R = (Byte*)((Void*)ResultPtr);

	//鎖定原圖欲處理像素位置
	ImageData1 = image1->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, image1->PixelFormat);
	//將int指標指向原圖像素資料最前面位置
	ptr = ImageData1->Scan0;
	//設定指標
	p = (Byte*)((Void*)ptr);


	//瀏覽所有像素點，取用像素，處理像素區域
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
					int pixel = (p[0] + p[1] + p[2]) / 3; // 平均RGB

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

	//解鎖像素位置
	image1->UnlockBits(ImageData1);
	grayImage->UnlockBits(grayImageData);
	//顯示在PictureBox上
	pictureBox1->Image = grayImage;

}
};
}