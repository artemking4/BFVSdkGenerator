// Object: BFUILayoutGroupListEntityData
// ClassId: 2293
// RuntimeId: 55944
// TypeInfo: 0x0000000144D97A10
#include "../CasablancaShared/BFUILayoutEntityData.h"
#include "../Core/DataContainer.h"
#include "../Core/Vec2.h"
#include "../CasablancaShared/BFUILayoutHorizontalAlignment.h"
#include "../CasablancaShared/BFUILayoutVerticalAlignment.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUILayoutGroupListEntityData : public CasablancaShared::BFUILayoutEntityData {
        Core::DataContainer DataInput; // 0x28
        Core::Vec2 Margin; // 0x30
        Core::Vec2 ElementStep; // 0x38
        Core::Vec2 ElementStepFactor; // 0x40
        CasablancaShared::BFUILayoutHorizontalAlignment HorizontalAlignment; // 0x48
        CasablancaShared::BFUILayoutVerticalAlignment VerticalAlignment; // 0x4C
    }; // 0x50
    static_assert(sizeof(BFUILayoutGroupListEntityData) == 0x50);
}
#pragma pack(pop)