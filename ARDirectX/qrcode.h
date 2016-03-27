//
//

#pragma once


namespace ar
{

	class cQRCode
	{
	public:
		cQRCode();
		virtual ~cQRCode();

		void Init(graphic::cRenderer &renderer, graphic::cModel *model, graphic::cText *text);
		void Render(graphic::cRenderer &renderer);


	public:
		int m_id; // QRCode ID 
		Matrix44 m_tm;	// QRCode�� �ν��� ��, 3���� �󿡼��� ī�޶� ���

		// display
		graphic::cModel *m_model; // reference
		graphic::cText *m_text; // reference
	};

}
