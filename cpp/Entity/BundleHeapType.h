// Object: BundleHeapType
// RuntimeId: 58934
// TypeInfo: 0x0000000144ED5C80

namespace Entity {
    enum BundleHeapType {
        BundleHeapType_OwnWithParentSmallblock = 0,
        BundleHeapType_OwnWithSmallblock = 1,
        BundleHeapType_OwnWithoutSmallblock = 2,
        BundleHeapType_Parent = 3,
        BundleHeapType_Level = 4,
        BundleHeapType_Global = 5,
        BundleHeapType_Null = 6
    };
}