// Object: InputCurveData
// ClassId: 4167
// RuntimeId: 39266
// TypeInfo: 0x0000000144E6C350
#include "../Core/DataContainer.h"
#include "../Global/Int32.h"
#include "../Core/Vec2.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace GameShared {
    class InputCurveData : public Core::DataContainer {
        Array<Int32> AffectedInputs; // 0x18
        Array<Core::Vec2> InputModifierCurve; // 0x20
        Boolean HandleMultipleInputsAsSquare; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(InputCurveData) == 0x30);
}
#pragma pack(pop)