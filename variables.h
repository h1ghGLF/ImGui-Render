#pragma once

namespace shapes {
	namespace line {
		ImVec4 line_color = ImVec4(1.0f, 1.0f, 1.0f, 1.0f);
		float line_thickness;

		float line_x_pos1;
		float line_y_pos1;

		float line_x_pos2;
		float line_y_pos2;
	}

	namespace rect {
		ImVec4 rect_color = ImVec4(1.0f, 1.0f, 1.0f, 1.0f);
		float rect_thickness;
		float rect_rounding;

		float rect_x_pos1;
		float rect_y_pos1;

		float rect_x_pos2;
		float rect_y_pos2;
	}

	namespace rect_filled {
		ImVec4 rect_filled_color = ImVec4(1.0f, 1.0f, 1.0f, 1.0f);
		float rect_filled_rounding;

		float rect_filled_x_pos1;
		float rect_filled_y_pos1;

		float rect_filled_x_pos2;
		float rect_filled_y_pos2;
	}
}