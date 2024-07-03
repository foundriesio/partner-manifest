# This is a FoundriesFactory Partner bblayers include file
# Meta-partner-qualcomm is a FoundriesFactory partner layer
# Do not remove unless you really know what you are doing.
BASELAYERS += " \
  ${OEROOT}/layers/meta-selinux \
  ${OEROOT}/layers/meta-partner-qualcomm \
"

BSPLAYERS = " \
  ${OEROOT}/layers/meta-qcom \
  ${OEROOT}/layers/meta-qcom-hwe \
  ${OEROOT}/layers/meta-lmp/meta-lmp-bsp \
"

