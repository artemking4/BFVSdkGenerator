// Object: ContextDatabaseChooserData
// ClassId: 1429
// RuntimeId: 37997
// TypeInfo: 0x0000000144EF4720
#include "../Core/DataContainer.h"
#include "../MotionMachineShared/IntChannelData.h"
#include "../MotionMachineShared/ContextDatabaseChooserIntData.h"
#include "../Global/Uint64.h"
#include "../MotionMachineShared/ContextDatabaseChooserBitmapData.h"
#include "../MotionMachineShared/BoolChannelData.h"
#include "../Global/Uint8.h"
#include "../MotionMachineShared/FloatChannelData.h"
#include "../MotionMachineShared/ContextDatabaseChooserFloatData.h"

#pragma pack(push, 8)
namespace MotionMachineShared {
    class ContextDatabaseChooserData : public Core::DataContainer {
        Array<MotionMachineShared::IntChannelData> IntValueChannels; // 0x18
        Array<MotionMachineShared::ContextDatabaseChooserIntData> SubjectIntValues; // 0x20
        Array<MotionMachineShared::IntChannelData> EnumValueChannels; // 0x28
        Array<Uint64> SubjectEnumMasks; // 0x30
        Array<MotionMachineShared::IntChannelData> BitmapValueChannels; // 0x38
        Array<MotionMachineShared::ContextDatabaseChooserBitmapData> SubjectBitmaps; // 0x40
        Array<MotionMachineShared::BoolChannelData> BoolValueChannels; // 0x48
        Array<Uint8> SubjectBoolMasks; // 0x50
        Array<Uint8> SubjectBoolSignificanceMasks; // 0x58
        Array<MotionMachineShared::FloatChannelData> FloatValueChannels; // 0x60
        Array<MotionMachineShared::ContextDatabaseChooserFloatData> SubjectFloatRanges; // 0x68
    }; // 0x70
    static_assert(sizeof(ContextDatabaseChooserData) == 0x70);
}
#pragma pack(pop)