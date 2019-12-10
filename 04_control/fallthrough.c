switch (cond)
  {
  case 1:
    a = 1;
    break;
  case 2:
    a = 2;
    /* FALLTHRU */
  case 3:
    a = 3;
    break;
  }
