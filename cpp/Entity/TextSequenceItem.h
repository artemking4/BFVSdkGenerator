// Object: TextSequenceItem
// ClassId: 5161
// RuntimeId: 55035
// TypeInfo: 0x0000000144EE2FD0
#include "../Core/DataContainer.h"
#include "../Global/CString.h"
#include "../Core/Vec3.h"
#include "../Core/Vec2.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace Entity {
    class TextSequenceItem : public Core::DataContainer {
        CString Text; // 0x18
        Core::Vec2 ScreenPosition; // 0x20
        Float32 TimeToShow; // 0x28
        char pad_0x2C[0x4];
        CString TriggerEvent; // 0x30
        Boolean UseEntityScreenPosition; // 0x38
        char pad_0x39[0x7];
        Core::Vec3 TextColor; // 0x40
    }; // 0x50
    static_assert(sizeof(TextSequenceItem) == 0x50);
}
#pragma pack(pop)