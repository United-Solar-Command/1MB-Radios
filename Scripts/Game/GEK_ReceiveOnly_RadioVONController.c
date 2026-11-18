modded class SCR_VONController
{
	override bool ActivateVON(notnull SCR_VONEntry entry, EVONTransmitType transmitType = EVONTransmitType.NONE)
	{
		SCR_VONEntryRadio radioEntry = SCR_VONEntryRadio.Cast(entry);
		if (radioEntry && GEK_ReceiveOnly_Radio.Cast(radioEntry.GetGadget()))
			return false;

		return super.ActivateVON(entry, transmitType);
	}
}
