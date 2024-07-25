# This is a FoundriesFactory Partner bblayers include file
# Meta-partner-qualcomm is a FoundriesFactory partner layer
# Do not remove unless you really know what you are doing.
BASELAYERS += " \
  ${OEROOT}/layers/meta-selinux \
  ${OEROOT}/layers/meta-partner-qualcomm \
  ${OEROOT}/layers/meta-openembedded/meta-multimedia \
"

BSPLAYERS = " \
  ${OEROOT}/layers/meta-qcom \
  ${OEROOT}/layers/meta-qcom-hwe \
  ${OEROOT}/layers/meta-qcom-qim-product-sdk \
  ${OEROOT}/layers/meta-lmp/meta-lmp-bsp \
"

