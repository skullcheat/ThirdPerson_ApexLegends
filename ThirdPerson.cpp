// ThirdPerson ON
			if (ThirdPerson == true && MenuSettings::thirdperson))
			{
				write<int>(oBaseAddress + OFFSET_THIRDPERSON, 1);
				write<int>(Entity + OFFSET_THIRDPERSON_SV, 1);
			}
			// ThirdPerson OFF
			else
			{
				if (tmp_thirdperson == false && MenuSettings::thirdperson))
				{
					write<int>(oBaseAddress + OFFSET_THIRDPERSON, 0);
					write<int>(Entity + OFFSET_THIRDPERSON_SV, 0);
				}

			}